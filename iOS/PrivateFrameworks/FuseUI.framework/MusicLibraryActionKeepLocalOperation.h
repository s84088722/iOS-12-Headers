//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class MPUContentItemIdentifierCollection;

@interface MusicLibraryActionKeepLocalOperation : NSOperation
{
    MPUContentItemIdentifierCollection *_contentItemIdentifierCollection;
    long long _keepLocalValue;
}

@property(readonly) long long keepLocalValue; // @synthesize keepLocalValue=_keepLocalValue;
@property(readonly, copy) MPUContentItemIdentifierCollection *contentItemIdentifierCollection; // @synthesize contentItemIdentifierCollection=_contentItemIdentifierCollection;
- (void).cxx_destruct;
- (void)main;
- (id)initWithContentItemIdentifierCollection:(id)arg1 keepLocalValue:(long long)arg2;

@end

