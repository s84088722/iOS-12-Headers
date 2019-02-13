//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct NSNumber {
    Class _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool showScanningState;
    _Bool showScanningStateDuringFaceDetect;
    double minimumDurationBeforeShowScanningState;
    _Bool bkCoachingHintsEnabled;
    double minimumDurationBetweenLeavingCoachingAndCoaching;
    double minimumDurationShowingCoaching;
    double durationOnCameraCoveredGlyphBeforeCoaching;
    double durationToSuppressCameraCoveredWhenWakingWithSmartCover;
    _Bool coachingDelaysUnlock;
    _Bool suppressFaceIDDisabledState;
    _Bool spinBeforeCoaching;
    unsigned long long substate;
} CDStruct_29b32c11;

typedef struct {
    long long fromState;
    long long toState;
    double progress;
} CDStruct_930a33b1;

