//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TKSmartCardSlotScreen : NSObject
{
    long long _physicalColumnCount;
    long long _physicalRowCount;
    long long _virtualColumnCount;
    long long _virtualRowCount;
}

@property long long virtualRowCount; // @synthesize virtualRowCount=_virtualRowCount;
@property long long virtualColumnCount; // @synthesize virtualColumnCount=_virtualColumnCount;
@property long long physicalRowCount; // @synthesize physicalRowCount=_physicalRowCount;
@property long long physicalColumnCount; // @synthesize physicalColumnCount=_physicalColumnCount;
- (_Bool)displayMessage:(id)arg1 x:(long long)arg2 y:(long long)arg3 duration:(double)arg4 clearScreen:(_Bool)arg5;

@end

