//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface FairPlayDecryptSession : NSObject
{
    NSData *_dpInfo;
    void *_decryptSession;
    NSString *_identifier;
}

- (id)identifier;
- (id)decryptBytes:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithDPInfo:(id)arg1;

@end

