//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetExplorer/AETileLayoutInfo-Protocol.h>

__attribute__((visibility("hidden")))
@interface AEGridOverlayLayoutInfo : NSObject <AETileLayoutInfo>
{
    struct CGSize __gradientImageSize;
}

@property(readonly, nonatomic) struct CGSize _gradientImageSize; // @synthesize _gradientImageSize=__gradientImageSize;
- (struct CGSize)tileSystemLayoutSizeFittingSize:(struct CGSize)arg1;
- (id)initWithGradientImageSize:(struct CGSize)arg1;

@end

