//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactBufferDecoder, CNContactFetchRequest, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CNiOSABContactBuffersDecoder : NSObject
{
    CNContactBufferDecoder *_decoder;
    NSMutableArray *_contactsWaitingForUnification;
    CNContactFetchRequest *_fetchRequest;
}

@property(readonly, nonatomic) CNContactFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(readonly, nonatomic) NSMutableArray *contactsWaitingForUnification; // @synthesize contactsWaitingForUnification=_contactsWaitingForUnification;
@property(readonly, nonatomic) CNContactBufferDecoder *decoder; // @synthesize decoder=_decoder;
- (void).cxx_destruct;
- (id)unifyContacts:(id)arg1 moreComing:(_Bool)arg2;
- (id)contactsFromData:(id)arg1 moreComing:(_Bool)arg2 error:(id *)arg3;
- (id)initWithFetchRequest:(id)arg1;
- (id)init;

@end

