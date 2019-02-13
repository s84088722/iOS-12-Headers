//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CARSessionStatus;
@protocol CPSessionConfigurationDelegate;

@interface CPSessionConfiguration : NSObject
{
    unsigned long long _limitedUserInterfaces;
    id <CPSessionConfigurationDelegate> _delegate;
    CARSessionStatus *_currentStatus;
}

+ (unsigned long long)convertLimitableUserInterfaces:(unsigned long long)arg1;
@property(retain, nonatomic) CARSessionStatus *currentStatus; // @synthesize currentStatus=_currentStatus;
@property(nonatomic) __weak id <CPSessionConfigurationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long limitedUserInterfaces; // @synthesize limitedUserInterfaces=_limitedUserInterfaces;
- (void).cxx_destruct;
- (void)_limitedUIDidChange:(id)arg1;
- (void)_updateLimitedUIStatus;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

