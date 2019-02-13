//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoServices/PHMediaFormatConversionCompositeRequest.h>

@class PHMediaFormatConversionRequest;

@interface PHMediaFormatLivePhotoConversionRequest : PHMediaFormatConversionCompositeRequest
{
    PHMediaFormatConversionRequest *_imageConversionRequest;
    PHMediaFormatConversionRequest *_videoConversionRequest;
}

+ (id)requestForImageConversionRequest:(id)arg1 videoConversionRequest:(id)arg2 error:(id *)arg3;
+ (id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id *)arg3;
@property(retain) PHMediaFormatConversionRequest *videoConversionRequest; // @synthesize videoConversionRequest=_videoConversionRequest;
@property(retain) PHMediaFormatConversionRequest *imageConversionRequest; // @synthesize imageConversionRequest=_imageConversionRequest;
- (void).cxx_destruct;
- (void)didPreflightSubrequest:(id)arg1;
- (void)enumerateSubrequests:(CDUnknownBlockType)arg1;
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;

@end

