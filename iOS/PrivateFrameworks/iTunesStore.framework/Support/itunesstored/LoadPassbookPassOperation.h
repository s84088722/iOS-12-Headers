//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSNumber;

@interface LoadPassbookPassOperation : ISOperation
{
    NSNumber *_accountID;
    CDUnknownBlockType _outputBlock;
}

- (void)run;
@property(copy) CDUnknownBlockType outputBlock;
@property(readonly) NSNumber *accountIdentifier;
- (void)dealloc;
- (id)initWithAccountIdentifier:(id)arg1;

@end

