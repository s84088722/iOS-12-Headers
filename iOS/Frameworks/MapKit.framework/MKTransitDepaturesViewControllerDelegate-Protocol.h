//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class GEOMapServiceTraits, MKTableViewCell, MKTransitDeparturesViewController, NSArray;
@protocol GEOTransitConnectionInfo, MKTransitLineMarker;

@protocol MKTransitDepaturesViewControllerDelegate <NSObject>
- (GEOMapServiceTraits *)transitDeparturesViewControllerTraits:(MKTransitDeparturesViewController *)arg1;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 didSelectTransitLine:(id <MKTransitLineMarker>)arg2 fromCell:(MKTableViewCell *)arg3;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 showIncidents:(NSArray *)arg2;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 didSelectConnectionInformation:(id <GEOTransitConnectionInfo>)arg2;
@end

