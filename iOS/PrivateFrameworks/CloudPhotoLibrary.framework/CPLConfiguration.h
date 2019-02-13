//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSURL, NSURLSession;
@protocol OS_dispatch_queue;

@interface CPLConfiguration : NSObject
{
    NSURL *_configurationFileURL;
    NSDictionary *_configuration;
    NSDate *_lastUpdate;
    double _updateInterval;
    NSURLSession *_currentSession;
    NSObject<OS_dispatch_queue> *_lock;
}

+ (void)disableConfigurationFetching;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)refetchFromDisk;
- (void)_setContents:(id)arg1;
- (void)_load;
- (void)_save;
- (void)check;
- (double)_updateInterval;
- (id)initWithClientLibraryBaseURL:(id)arg1;

@end

