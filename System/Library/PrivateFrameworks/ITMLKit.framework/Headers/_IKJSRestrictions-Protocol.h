//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSRestrictions-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class NSString;

@protocol _IKJSRestrictions <IKJSRestrictions, JSExport>
@property(readonly, nonatomic) _Bool allowsShowingUndownloadedMovies;
@property(readonly, nonatomic) _Bool allowsShowingUndownloadedTVShows;
@property(readonly, nonatomic) _Bool allowsITunes;
@property(readonly, nonatomic) _Bool appAnalyticsAllowed;
@property(readonly, nonatomic) _Bool appInstallationAllowed;
@property(readonly, nonatomic) NSString *maxAppRating;
@property(readonly, nonatomic) _Bool allowArtistActivity;
@property(readonly, nonatomic) long long maxAppRank;
@end
