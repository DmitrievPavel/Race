#pragma once
#ifdef RACELIB_EXPORTS
#define RACELIB_API __declspec(dllexport)
#else
#define RACELIB_API __declspec(dllimport)
#endif

class transport {
protected:
    double V, t_dvij;
public:
    transport();
    virtual double run(int S);
};
