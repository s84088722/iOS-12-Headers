//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/CLSClue.h>

@interface CLSInputClue : CLSClue
{
    _Bool _needsPreparation;
}

@property _Bool needsPreparation; // @synthesize needsPreparation=_needsPreparation;
- (void)_prepareWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)prepareIfNeeded;
- (id)init;

@end

