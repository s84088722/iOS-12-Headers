//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, NSUUID;

@interface HFStateRestorationSettings : NSObject
{
    int _notifyRegistrationToken;
    NSHashTable *_observers;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) int notifyRegistrationToken; // @synthesize notifyRegistrationToken=_notifyRegistrationToken;
- (void).cxx_destruct;
- (void)_selectedHomeDidChange;
- (void)_setHomeAppPreferencesValue:(id)arg1 forKey:(id)arg2;
- (id)_homeAppPreferencesValueForKey:(id)arg1 ofClass:(Class)arg2;
@property(copy, nonatomic) NSString *selectedHomeAppTabIdentifier;
- (id)_roomKeyForHomeIdentifier:(id)arg1;
- (void)saveSelectedRoomIdentifier:(id)arg1 forHomeIdentifier:(id)arg2;
- (id)selectedRoomIdentifierForHomeIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSUUID *selectedRoomIdentifierForSelectedHome;
@property(copy, nonatomic) NSUUID *selectedHomeIdentifier;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end
