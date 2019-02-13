//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLPhotoEditExportProperties : NSObject
{
    long long _baseEXIFOrientation;
    double _baseDuration;
    unsigned long long _imageWidth;
    unsigned long long _imageHeight;
}

+ (id)exportPropertiesWithImageWidth:(unsigned long long)arg1 imageHeight:(unsigned long long)arg2 exifOrientation:(long long)arg3 duration:(double)arg4;
+ (id)exportPropertiesWithImageWidth:(unsigned long long)arg1 imageHeight:(unsigned long long)arg2 exifOrientation:(long long)arg3;
@property(readonly, nonatomic) unsigned long long imageHeight; // @synthesize imageHeight=_imageHeight;
@property(readonly, nonatomic) unsigned long long imageWidth; // @synthesize imageWidth=_imageWidth;
@property(readonly, nonatomic) double baseDuration; // @synthesize baseDuration=_baseDuration;
@property(readonly, nonatomic) long long baseEXIFOrientation; // @synthesize baseEXIFOrientation=_baseEXIFOrientation;

@end

