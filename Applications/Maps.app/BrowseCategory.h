//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOSearchCategory, MKLocalSearchCompletion, NSArray, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface BrowseCategory : NSObject
{
    unsigned long long _type;
    NSArray *_subCategories;
    GEOSearchCategory *_category;
    MKLocalSearchCompletion *_searchAutoCompletion;
}

@property(retain, nonatomic) MKLocalSearchCompletion *searchAutoCompletion; // @synthesize searchAutoCompletion=_searchAutoCompletion;
@property(retain, nonatomic) GEOSearchCategory *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSArray *subCategories; // @synthesize subCategories=_subCategories;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)directionMode;
@property(readonly, nonatomic) NSString *alternativeName;
@property(readonly, nonatomic) NSString *name;
- (id)imageWithScale:(double)arg1 isCarplay:(_Bool)arg2;
- (id)imageWithScale:(double)arg1;
- (id)imageForCarplay:(_Bool)arg1;
@property(readonly, nonatomic) UIImage *image;
- (id)initWithCategory:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end

