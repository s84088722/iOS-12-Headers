//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionUserActivityOpener-Protocol.h>

@class CNLSApplicationWorkspace, NSString;

@interface _CNUIUserActionUserActivityOpener : NSObject <CNUIUserActionUserActivityOpener>
{
    CNLSApplicationWorkspace *_applicationWorkspace;
}

+ (id)errorForUnableToOpenUserActivity:(id)arg1 withUnderlyingError:(id)arg2;
@property(readonly, nonatomic) CNLSApplicationWorkspace *applicationWorkspace; // @synthesize applicationWorkspace=_applicationWorkspace;
- (void).cxx_destruct;
- (id)openUserActivity:(id)arg1 usingBundleIdentifier:(id)arg2 withScheduler:(id)arg3;
- (id)initWithApplicationWorkspace:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

