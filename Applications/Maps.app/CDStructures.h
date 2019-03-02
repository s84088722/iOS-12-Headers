//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct ArtworkWidthCalculatorSizeParameter {
    double defaultArtworkViewWidth;
    double maxArtworkViewWidth;
    struct UIEdgeInsets artworkInsets;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct GEONavigationAudioFeedback {
    int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
    _Bool _field15;
    _Bool _field16;
    _Bool _field17;
    _Bool _field18;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
    } _field19;
};

struct GEOTimepoint {
    double _time;
    int _type;
    struct {
        unsigned int time:1;
        unsigned int type:1;
    } _has;
};

struct MapsLargerHitTargetButton {
    Class _field1;
};

struct MapsSuggestionsEntry {
    Class _field1;
};

struct NSArray {
    Class _field1;
};

struct NSDateInterval {
    Class _field1;
};

struct NSDictionary {
    Class _field1;
};

struct NSDirectionalEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct NSMutableArray {
    Class _field1;
};

struct NSSet {
    Class _field1;
};

struct NSString {
    Class _field1;
};

struct RoutePlanningTransitionContext {
    double tableViewHeightForFullLayout;
    double cardHeightMinusTableViewHeight;
    struct CGRect rectOfRowToKeepVisible;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct os_state_data_decoder_s {
    char _field1[64];
    char _field2[64];
};

struct os_state_data_s {
    unsigned int _field1;
    union {
        unsigned int :32;
        unsigned int _field1;
    } _field2;
    struct os_state_data_decoder_s _field3;
    char _field4[64];
    unsigned char _field5[0];
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    unsigned long long _field2;
} CDStruct_856ef1b3;

typedef struct {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
} CDStruct_8024420c;

typedef struct {
    _Bool expanded;
    _Bool showSelectLabel;
    _Bool navigationAidedDrivingEnabled;
    unsigned long long suggestionKey;
} CDStruct_76aa0d91;

typedef struct {
    _Bool displaySharingFooter;
    _Bool stepSelectionEnabled;
} CDStruct_c1fce0fc;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    _Bool _field5;
} CDStruct_511c724f;

typedef struct {
    unsigned int _field1;
    float _field2;
} CDStruct_f48a8b00;

typedef struct {
    unsigned long long type;
    unsigned long long scaling;
    long long constantRate;
    long long minimumRate;
    long long maximumRate;
    double minZoomLevel;
    double maxZoomLevel;
    double minMapSpan;
    double maxMapSpan;
    unsigned long long mapSpanSubtype;
    _Bool ignoreConnectionType;
    _Bool ignoreCameraStyle;
    double temporaryDisplayRateDuration;
    _Bool throttleWhenIdle;
    long long idleDisplayRate;
    double idleCheckInterval;
    double idleTimeThreshold;
    double idleSpeedThreshold;
} CDStruct_d3cf2d55;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    double rgbColorBackground[3];
    double rgbColorText[3];
    double rgbColorButtonBackground[3];
    double rgbColorButtonText[3];
    double rgbColorSecondButtonBackground[3];
    double rgbColorSecondButtonText[3];
    double rgbColorProgressIndicator[3];
    double progressIndicatorAlpha;
    long long statusBarStyle;
} CDStruct_3a489998;

typedef struct {
    double maximumWidth;
    double maximumHeight;
    unsigned long long maximumNumberOfLines;
} CDStruct_dfb4e416;

typedef struct {
    double holdTime;
    double holdMagnitude;
    double impulseMagnitude;
    double impulseMagnitudeAccelerationFactor;
    double impulseMagnitudeMax;
    double impulseAccelerationTimeout;
    double stopTimer;
} CDStruct_1aa5c685;

typedef struct {
    double _field1;
    long long _field2;
    double _field3;
    long long _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
} CDStruct_afd8a9cd;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
} CDStruct_818bb265;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    unsigned long long edgePosition;
    unsigned long long cornerPosition;
    long long axis;
    unsigned long long pinnedEdges;
    _Bool fillAxis;
    struct UIEdgeInsets margins;
    _Bool flipForRightHandDrive;
    unsigned long long edgesAffectingMapInsets;
} CDStruct_87f3a021;

typedef struct {
    double subtitleOpacity;
    double buttonBorderColorOpacity;
    double secondButtonBorderColorOpacity;
    long long buttonBorderColorMatches;
    CDStruct_3a489998 colorSchemes[3][2];
} CDStruct_c930090f;

typedef struct {
    double titleFontSizeMax;
    double titleFontSizeMin;
    double titleFontSizeStep;
    long long titleFontWeight;
    double subtitleFontSize;
    double buttonTitleFontSize;
    long long buttonTitleFontWeight;
    double defaultSideMargin;
    struct CGSize minButtonSize;
    struct UIEdgeInsets minButtonMargins;
    double buttonBorderWidth;
    double buttonCornerRadius;
    struct UIEdgeInsets buttonContentEdgeInsets;
    long long buttonStyle;
    struct UIEdgeInsets buttonTouchInsets;
    double baselineMarginTitleToTop;
    double baselineMarginSubtitleToTitle;
    double baselineMarginBottomToText;
    struct UIEdgeInsets minButtonMarginsForExpandedLayout;
    double baselineMarginTitleToTopExpanded;
    double baselineMarginBottomToTextReduced;
    struct UIEdgeInsets minButtonMarginsForWideLayout;
    double baselineMarginTitleToTopForWideLayout;
    double baselineMarginBottomToTextForWideLayout;
    double baselineMarginBottomToTextForWideLayoutReduced;
    double minGapBetweenLabelsForWideLayout;
    struct UIEdgeInsets minButtonMarginsForExpandedWideLayout;
    double shadowLineHeight;
    double preferredHeight;
} CDStruct_5a87c3c3;

typedef struct {
    double padding;
    double searchButtonHeight;
    double searchButtonWidth;
    CDStruct_7a88dfd8 title;
    CDStruct_7a88dfd8 title_SubTitle;
    CDStruct_7a88dfd8 title_Button;
    CDStruct_7a88dfd8 title_SubTitle_Button;
} CDStruct_4db910df;

typedef struct {
    double subtitleOpacity;
    double buttonBorderColorOpacity;
    long long buttonBorderColorMatches;
    struct {
        double rgbColorBackground[3];
        double rgbColorText[3];
        double rgbColorButtonBackground[3];
        double rgbColorButtonText[3];
        long long statusBarStyle;
    } colorSchemes[2];
} CDStruct_ef18e7e3;

typedef struct {
    CDStruct_34734122 origin;
    struct {
        double width;
        double height;
    } size;
} CDStruct_02837cd9;

typedef struct {
    struct CGSize referenceSize;
    double arrowStemWidth;
    double intersectionStemWidth;
    double intersectionStrokeWidth;
    struct CGSize arrowHeadSize;
    double arrowStemCornerRadius;
    double arbitraryCurveRadius;
    double uTurnRadius;
    long long arrowStyle;
    double rightTurnCurveRadius;
    double rightTurnInnerCurveRadius;
    double rightTurnStemLengthBeforeTurn;
    double rightTurnStemLengthAfterTurn;
    double fortyFiveDegreeSouthAngleStemLengthBeforeTurn;
    double fortyFiveDegreeSouthAngleStemLengthAfterTurn;
    double fortyFiveDegreeSouthAngleCornerRadius;
    double fortyFiveDegreeNorthAngleStemLengthBeforeTurn;
    double fortyFiveDegreeNorthAngleStemLengthAfterTurn;
    double fortyFiveDegreeNorthAngleCornerRadius;
    double exitStemLengthBeforeTurn;
    double exitStemLengthAfterTurn;
    double exitRoadNotTakenStemLength;
    double arrivalOuterCircleWidth;
    double arrivalGapBetweenCircles;
    double arrivalGapBetweenArrowAndCircles;
    _Bool arrivalCutOutArrowInInnerCircle;
    double mergeRightStemLengthBeforeTurn;
    double mergeRightStemLengthAfterTurn;
    double mergeRightCornerRadius;
    _Bool junctionsDrawEntryExitRightAngles;
    _Bool junctionsDrawEntryExitFortyFiveDegreeAngles;
} CDStruct_092aca68;

typedef struct {
    struct CLLocationCoordinate2D center;
    struct {
        double latitudeDelta;
        double longitudeDelta;
    } span;
} CDStruct_b7cb895d;

typedef struct {
    struct CGPoint _field1;
    struct CGSize _field2;
    double _field3;
    struct CGRect _field4;
} CDStruct_660f747d;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    double duration;
    double mass;
    double stiffness;
    double damping;
} CDStruct_62478167;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
} CDStruct_39925896;

typedef struct {
    double latitude;
    double longitude;
    double altitude;
} CDStruct_071ac149;

typedef struct {
    double start;
    double end;
    double dt;
} CDStruct_37002fae;

typedef struct {
    double titleLastBaselineToCenterY;
    double subTitleLastBaselineToCenterY;
    double searchButtonTopToCenterY;
} CDStruct_7a88dfd8;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    double x;
    double y;
} CDStruct_34734122;
