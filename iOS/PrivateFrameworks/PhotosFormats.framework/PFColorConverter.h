//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosFormats/PFAVReaderWriterAdjustDelegate-Protocol.h>

@class CIContext, NSString, PFAVReaderWriter;

@interface PFColorConverter : NSObject <PFAVReaderWriterAdjustDelegate>
{
    PFAVReaderWriter *_readerWriter;
    CIContext *_conversionContext;
}

- (void).cxx_destruct;
- (void)adjustPixelBuffer:(struct __CVBuffer *)arg1 toOutputBuffer:(struct __CVBuffer *)arg2;
- (void)convertWithVideoURL:(id)arg1 outURL:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

