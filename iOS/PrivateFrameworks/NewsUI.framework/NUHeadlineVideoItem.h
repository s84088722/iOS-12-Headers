//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUVideoItem-Protocol.h>

@class FCAssetHandle, NSString, NSURL;
@protocol FCHeadlineProviding, NUAdContextProvider;

@interface NUHeadlineVideoItem : NSObject <NUVideoItem>
{
    id <NUAdContextProvider> _adContextProvider;
    id <FCHeadlineProviding> _headline;
}

@property(readonly, copy, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPaid) _Bool paid;
@property(readonly, nonatomic, getter=isBoundToContext) _Bool boundToContext;
@property(readonly, nonatomic, getter=isHiddenFromFeeds) _Bool hiddenFromFeeds;
@property(readonly, copy, nonatomic) NSURL *callToActionURL;
@property(readonly, copy, nonatomic) NSString *callToActionTitle;
@property(readonly, copy, nonatomic) NSString *sourceTagID;
@property(readonly, copy, nonatomic) NSString *articleID;
@property(readonly, copy, nonatomic) NSString *sourceName;
@property(readonly, nonatomic) FCAssetHandle *nameImageAssetHandle;
@property(readonly, nonatomic) id <NUAdContextProvider> adContextProvider; // @synthesize adContextProvider=_adContextProvider;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSURL *videoURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeadline:(id)arg1;
- (id)init;

@end

