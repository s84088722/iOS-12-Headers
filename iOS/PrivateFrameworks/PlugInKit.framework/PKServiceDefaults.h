//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@class PKServicePersonality;

@interface PKServiceDefaults : NSUserDefaults
{
    PKServicePersonality *_personality;
}

@property __weak PKServicePersonality *personality; // @synthesize personality=_personality;
- (void).cxx_destruct;
- (_Bool)synchronize;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)initWithPersonality:(id)arg1;

@end

