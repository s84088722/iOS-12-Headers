//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/MPArtworkDataSourceVisualIdenticality-Protocol.h>

@class NSBundle, NSString, UIColor;

@interface MusicBundleImageArtworkRequest : NSObject <MPArtworkDataSourceVisualIdenticality>
{
    NSBundle *_bundle;
    NSString *_imageName;
    long long _renderingMode;
    UIColor *_tintColor;
}

@property(copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) long long renderingMode; // @synthesize renderingMode=_renderingMode;
@property(readonly, copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithImageName:(id)arg1 inBundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

