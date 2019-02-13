//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MIME/MFBaseFilterDataConsumer.h>

#import <MIME/MFGuaranteedCollectingDataConsumer-Protocol.h>

@class MFLock, NSString;
@protocol MFGuaranteedCollectingDataConsumer;

@interface MFMutableFilterDataConsumer : MFBaseFilterDataConsumer <MFGuaranteedCollectingDataConsumer>
{
    id <MFGuaranteedCollectingDataConsumer> _mainConsumer;
    MFLock *_consumerLock;
    _Bool _isDone;
}

- (void)done;
- (id)data;
- (long long)appendData:(id)arg1;
- (void)addDataConsumer:(id)arg1;
- (void)dealloc;
- (id)initWithMainConsumer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

