//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

#import <MIME/MFPubliclyDescribable-Protocol.h>

@class NSString;

@interface NSError (Additions) <MFPubliclyDescribable>
+ (void)mf_setDecoder:(CDUnknownBlockType)arg1 forDomain:(id)arg2;
@property(readonly, copy, nonatomic) NSString *mf_publicDescription;
- (CDUnknownBlockType)mf_match;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

