//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/TVViewElement.h>

@class IKAssetElement, NSNumber, NSString, NSURL;

@interface TVAssetElement : TVViewElement
{
}

- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) NSNumber *rentalAdamID;
@property(readonly, nonatomic) NSNumber *persistentID;
@property(readonly, nonatomic) unsigned long long keyDelivery;
@property(readonly, nonatomic) IKAssetElement *assetElement;
@property(readonly, nonatomic) NSURL *extrasURL;
@property(readonly, nonatomic) NSString *adamID;
@property(readonly, nonatomic) NSString *actionParams;

@end

