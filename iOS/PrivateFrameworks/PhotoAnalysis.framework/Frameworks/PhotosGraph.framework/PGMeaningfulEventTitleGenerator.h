//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGDefaultCollectionTitleGenerator.h>

@class PGGraphMeaningEdge;

@interface PGMeaningfulEventTitleGenerator : PGDefaultCollectionTitleGenerator
{
    PGGraphMeaningEdge *_meaningEdge;
}

@property(retain, nonatomic) PGGraphMeaningEdge *meaningEdge; // @synthesize meaningEdge=_meaningEdge;
- (void).cxx_destruct;
- (id)_timeTitle;
- (id)_meaningLabelForTitle;
- (id)_title;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithCollection:(id)arg1 meaningEdge:(id)arg2;

@end

