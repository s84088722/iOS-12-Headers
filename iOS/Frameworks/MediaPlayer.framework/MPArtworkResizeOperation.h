//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSObject, NSURL, UIImage;
@protocol OS_dispatch_group;

@interface MPArtworkResizeOperation : NSOperation
{
    _Bool _usesExactFittingSizeAsDestinationSize;
    UIImage *_resizedImage;
    NSError *_error;
    NSURL *_destinationURL;
    NSObject<OS_dispatch_group> *_operationGroup;
    UIImage *_image;
    struct CGSize _scaledFittingSize;
}

@property(nonatomic) _Bool usesExactFittingSizeAsDestinationSize; // @synthesize usesExactFittingSizeAsDestinationSize=_usesExactFittingSizeAsDestinationSize;
@property(nonatomic) struct CGSize scaledFittingSize; // @synthesize scaledFittingSize=_scaledFittingSize;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *operationGroup; // @synthesize operationGroup=_operationGroup;
@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) UIImage *resizedImage; // @synthesize resizedImage=_resizedImage;
- (void).cxx_destruct;
- (struct CGSize)_resizedScaledSizeForScaledImageSize:(struct CGSize)arg1 scaledFittingSize:(struct CGSize)arg2;
- (void)main;
- (id)initWithImage:(id)arg1 scaledFittingSize:(struct CGSize)arg2 useExactFittingSizeAsDestinationSize:(_Bool)arg3 destinationURL:(id)arg4;
- (id)initWithImage:(id)arg1 scaledFittingSize:(struct CGSize)arg2 destinationURL:(id)arg3;
- (id)initWithImage:(id)arg1 scaledFittingSize:(struct CGSize)arg2;

@end

