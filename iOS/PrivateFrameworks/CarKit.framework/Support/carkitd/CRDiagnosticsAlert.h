//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CRAlert.h"

@class NSString;

@interface CRDiagnosticsAlert : CRAlert
{
    NSString *_bannerMessage;
    double _timeoutInterval;
}

@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(retain, nonatomic) NSString *bannerMessage; // @synthesize bannerMessage=_bannerMessage;
- (void).cxx_destruct;
- (id)alertAcceptButtonTitle;
- (id)lockscreenTitle;
- (id)alertTitle;
- (double)alertDismissal;
- (_Bool)allowInCar;

@end

