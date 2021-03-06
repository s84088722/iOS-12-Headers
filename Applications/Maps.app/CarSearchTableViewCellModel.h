//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapItem, NSBlockOperation, NSNumber, NSSet, NSString, SearchResult, UIColor;

__attribute__((visibility("hidden")))
@interface CarSearchTableViewCellModel : NSObject
{
    NSBlockOperation *_markedAsUpdatedOperation;
    _Bool _reverseGeocoding;
    long long _style;
    NSString *_firstLine;
    NSString *_secondLine;
    NSString *_lastLine;
    NSNumber *_rating;
    NSString *_ratingProviderName;
    MKMapItem *_mapItem;
    SearchResult *_searchResult;
    CDUnknownBlockType _updateBlock;
    NSSet *_observedKeyPaths;
    id _observedObject;
    UIColor *_debugBackgroundcolor;
    NSString *_debugSubtitle;
    struct CLLocationCoordinate2D _coordinate;
}

+ (id)modelWithUpdateBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *debugSubtitle; // @synthesize debugSubtitle=_debugSubtitle;
@property(copy, nonatomic) UIColor *debugBackgroundcolor; // @synthesize debugBackgroundcolor=_debugBackgroundcolor;
@property(retain, nonatomic) id observedObject; // @synthesize observedObject=_observedObject;
@property(retain, nonatomic) NSSet *observedKeyPaths; // @synthesize observedKeyPaths=_observedKeyPaths;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(nonatomic, getter=isReverseGeocoding) _Bool reverseGeocoding; // @synthesize reverseGeocoding=_reverseGeocoding;
@property(retain, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(copy, nonatomic) NSString *ratingProviderName; // @synthesize ratingProviderName=_ratingProviderName;
@property(retain, nonatomic) NSNumber *rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSString *lastLine; // @synthesize lastLine=_lastLine;
@property(copy, nonatomic) NSString *secondLine; // @synthesize secondLine=_secondLine;
@property(copy, nonatomic) NSString *firstLine; // @synthesize firstLine=_firstLine;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)markAsUpdated;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeObject:(id)arg1 forKeyPaths:(id)arg2;
- (void)requestReverseGeocodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestForwardGeocodeWithAddressString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

