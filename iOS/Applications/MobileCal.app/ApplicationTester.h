//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIApplicationTestingDelegate-Protocol.h"

@class ApplicationTest, CalendarModel, NSMutableDictionary, NSString, UIWindow;

@interface ApplicationTester : NSObject <UIApplicationTestingDelegate>
{
    NSMutableDictionary *_testNamesToTestClasses;
    ApplicationTest *_currentlyRunningTest;
    CalendarModel *_model;
}

+ (_Bool)testingSessionStarted;
- (void).cxx_destruct;
- (Class)_testClassForTestName:(id)arg1;
@property(readonly, nonatomic) NSString *extendedLaunchTestName;
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
