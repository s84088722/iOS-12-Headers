//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Typedef'd Structures

typedef struct {
    double startTime;
    unsigned char userChangedFriendlyName;
    unsigned char playPasswordSet;
    unsigned char adminPasswordSet;
    unsigned char destinationNetworkRecommendationUsed;
    double secondsToGetLinkUpOnSWAP;
    int wifiJoinSWAPError;
    unsigned char hitJoiningTargetSWAPTimeout;
    int rssiOfSWAP;
    unsigned int snrOfSWAP;
    unsigned int channelOfSWAP;
} CDStruct_56123b44;

typedef struct {
    double secondsToGetLinkUpOnDestination;
    int wifiJoinDestinationAPError;
    unsigned char destinationNetworkPSKInKeychain;
    unsigned char hitJoiningDestinationAPTimeout;
    int rssiOfDestinationAP;
    unsigned int snrOfDestinationAP;
    unsigned int channelOfDestinationAP;
} CDStruct_6a23f5a0;

