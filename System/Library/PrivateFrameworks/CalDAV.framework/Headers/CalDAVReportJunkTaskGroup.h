//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSArray;

@interface CalDAVReportJunkTaskGroup : CoreDAVTaskGroup
{
    NSArray *_resourceURLs;
}

- (void).cxx_destruct;
- (void)startTaskGroup;
- (id)initWithResourceURLs:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3;

@end
