//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UITextRange;
@protocol NSItemProviderWriting;

@interface UITextDraggableObject : NSObject
{
    id <NSItemProviderWriting> _object;
    UITextRange *_range;
    CDUnknownBlockType _targetedPreviewProvider;
    CDUnknownBlockType _previewProvider;
}

+ (id)draggableObject:(id)arg1 fromRange:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType previewProvider; // @synthesize previewProvider=_previewProvider;
@property(copy, nonatomic) CDUnknownBlockType targetedPreviewProvider; // @synthesize targetedPreviewProvider=_targetedPreviewProvider;
@property(retain, nonatomic) UITextRange *range; // @synthesize range=_range;
@property(retain, nonatomic) id <NSItemProviderWriting> object; // @synthesize object=_object;
- (void).cxx_destruct;

@end

