//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCKeyValueStore, NSDate;

@interface FRAdHistory : NSObject
{
    FCKeyValueStore *_store;
    NSDate *_dateOfLastSave;
}

+ (id)sharedHistory;
@property(retain, nonatomic) NSDate *dateOfLastSave; // @synthesize dateOfLastSave=_dateOfLastSave;
@property(retain, nonatomic) FCKeyValueStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)performSaveIfNeeded;
- (void)save;
- (void)dealloc;
- (id)init;

@end
