//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIDragPreview;

__attribute__((visibility("hidden")))
@interface _UIDragPreviewProvider : NSObject
{
    CDUnknownBlockType _previewProviderBlock;
    UIDragPreview *_preview;
}

+ (id)previewProviderWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIDragPreview *preview; // @synthesize preview=_preview;

@end

