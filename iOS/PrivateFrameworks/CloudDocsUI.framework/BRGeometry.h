//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsUI/NSCoding-Protocol.h>

@class NSArray, NSString;

@interface BRGeometry : NSObject <NSCoding>
{
    _Bool _hasAmbiguousLayout;
    _Bool _isClipped;
    NSString *_name;
    NSString *_contentDescription;
    NSArray *_subitems;
    struct CGRect _absoluteFrame;
}

+ (void)initialize;
@property(copy, nonatomic) NSArray *subitems; // @synthesize subitems=_subitems;
@property(copy, nonatomic) NSString *contentDescription; // @synthesize contentDescription=_contentDescription;
@property(nonatomic) _Bool isClipped; // @synthesize isClipped=_isClipped;
@property(nonatomic) _Bool hasAmbiguousLayout; // @synthesize hasAmbiguousLayout=_hasAmbiguousLayout;
@property(nonatomic) struct CGRect absoluteFrame; // @synthesize absoluteFrame=_absoluteFrame;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)data;
- (_Bool)isValidForGeometryValidation:(unsigned long long)arg1 offendingGeometry:(id *)arg2;
- (_Bool)isEqualToTemplate:(id)arg1 diagnostic:(id *)arg2;
- (id)description;
- (id)recursiveDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithView:(id)arg1 rootView:(id)arg2;
- (id)gatherSubviews:(id)arg1;
- (id)initWithView:(id)arg1;

@end

