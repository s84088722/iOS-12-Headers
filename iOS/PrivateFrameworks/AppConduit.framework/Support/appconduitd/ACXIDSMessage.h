//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSMessageContext, NSDictionary, NSString;

@interface ACXIDSMessage : NSObject
{
    NSDictionary *_message;
    IDSMessageContext *_idsContext;
    NSString *_fromID;
}

@property(readonly) NSString *fromID; // @synthesize fromID=_fromID;
@property(readonly) IDSMessageContext *idsContext; // @synthesize idsContext=_idsContext;
@property(readonly) NSDictionary *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1 idsContext:(id)arg2 fromID:(id)arg3;

@end

