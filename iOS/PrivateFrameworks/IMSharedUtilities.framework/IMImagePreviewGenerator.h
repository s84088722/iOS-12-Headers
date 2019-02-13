//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMSharedUtilities/IMPreviewGenerator.h>

#import <IMSharedUtilities/IMPreviewGeneratorProtocol-Protocol.h>
#import <IMSharedUtilities/IMUTITypeInformation-Protocol.h>

@interface IMImagePreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
{
}

+ (struct CGImage *)newCroppedAndRescaledImageFromImage:(struct CGImage *)arg1 constraints:(struct IMPreviewConstraints)arg2 targetPxSize:(struct CGSize)arg3;
+ (struct CGRect)_scaledTargetRectForSize:(struct CGSize)arg1 andThumbnailSize:(struct CGSize)arg2;
+ (double)_scaleFactorForThumbnailWithSize:(struct CGSize)arg1 constraints:(struct IMPreviewConstraints)arg2 targetPxSize:(struct CGSize)arg3;
+ (struct CGImage *)newThumbnailFillToSize:(struct CGSize)arg1 imagePxSize:(struct CGSize)arg2 imageSource:(struct CGImageSource *)arg3 scale:(double)arg4;
+ (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (id)UTITypes;
+ (id)fetchUTITypes;

@end

