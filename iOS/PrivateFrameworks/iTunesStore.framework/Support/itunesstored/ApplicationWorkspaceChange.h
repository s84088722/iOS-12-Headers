//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ApplicationHandle;

@interface ApplicationWorkspaceChange : NSObject
{
    long long _changeType;
    ApplicationHandle *_applicationHandle;
}

@property(copy, nonatomic) ApplicationHandle *applicationHandle; // @synthesize applicationHandle=_applicationHandle;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
- (void).cxx_destruct;

@end

