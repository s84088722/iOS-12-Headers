//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DACalDAV/CoreDAVTaskGroupDelegate-Protocol.h>

@class NSDictionary, NSError, NSSet, NSString;
@protocol CalDAVPrincipal;

@protocol CalDAVCalendarPropertyRefreshDelegate <CoreDAVTaskGroupDelegate>
- (void)calendarRefreshForPrincipal:(id <CalDAVPrincipal>)arg1 completedWithNewCTags:(NSDictionary *)arg2 newSyncTokens:(NSDictionary *)arg3 calendarHomeSyncToken:(NSString *)arg4 updatedCalendars:(NSSet *)arg5 error:(NSError *)arg6;
@end
