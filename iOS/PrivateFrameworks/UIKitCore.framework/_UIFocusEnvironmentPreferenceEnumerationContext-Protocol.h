//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, _UIDebugLogReport;
@protocol UIFocusEnvironment;

@protocol _UIFocusEnvironmentPreferenceEnumerationContext <NSObject>
@property(readonly, nonatomic) _UIDebugLogReport *debugReport;
@property(readonly, nonatomic) NSArray *preferredEnvironments;
@property(readonly, nonatomic) id <UIFocusEnvironment> preferringEnvironment;
@property(readonly, nonatomic) _Bool prefersNothingFocused;
@property(readonly, nonatomic, getter=isPreferredByItself) _Bool preferredByItself;
@property(readonly, nonatomic) _Bool isLeafPreference;
@property(readonly, nonatomic) _Bool isPrimaryPreference;
@property(readonly, nonatomic) id <UIFocusEnvironment> environment;
@end

