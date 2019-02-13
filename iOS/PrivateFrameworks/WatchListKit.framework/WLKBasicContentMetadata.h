//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, WLKArtworkVariantListing;

@interface WLKBasicContentMetadata : NSObject
{
    _Bool _isEvod;
    unsigned long long _contentType;
    NSString *_canonicalID;
    NSString *_title;
    NSString *_shortTitle;
    NSString *_descriptiveText;
    WLKArtworkVariantListing *_images;
    NSNumber *_commonSenseBeginsAge;
    NSArray *_categories;
}

+ (Class)_classForContentType:(unsigned long long)arg1;
+ (unsigned long long)contentTypeForString:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(readonly, nonatomic) NSNumber *commonSenseBeginsAge; // @synthesize commonSenseBeginsAge=_commonSenseBeginsAge;
@property(readonly, nonatomic) WLKArtworkVariantListing *images; // @synthesize images=_images;
@property(readonly, copy, nonatomic) NSString *descriptiveText; // @synthesize descriptiveText=_descriptiveText;
@property(readonly, copy, nonatomic) NSString *shortTitle; // @synthesize shortTitle=_shortTitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool isEvod; // @synthesize isEvod=_isEvod;
@property(readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

