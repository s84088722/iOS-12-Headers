//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADSyncInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADSyncOperationGroup : CADOperationGroup <CADSyncInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
- (void)CADDatabaseGetDeletableSources:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetDeletableCalendars:(CDUnknownBlockType)arg1;
- (_Bool)accessGrantedToPerformSelector:(SEL)arg1;

@end

