//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

#import <RemoteUI/RUIHeaderDelegate-Protocol.h>
#import <RemoteUI/RUITableFooterDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSNumber, RUIDetailHeaderElement, RUISubHeaderElement, RUITableView, RUITableViewHeaderFooterView, RUITableViewRow, UIView;
@protocol RUIHeader, RemoteUITableFooter;

@interface RUITableViewSection : RUIElement <RUIHeaderDelegate, RUITableFooterDelegate>
{
    NSMutableArray *_rows;
    long long _disclosureLimit;
    RUITableViewHeaderFooterView *_containerizedHeaderView;
    RUITableViewHeaderFooterView *_containerizedFooterView;
    NSNumber *_drawsTopSeparator;
    _Bool _configured;
    UIView<RUIHeader> *_headerView;
    UIView<RemoteUITableFooter> *_footerView;
    double _headerHeight;
    double _footerHeight;
    RUITableViewRow *_showAllRow;
    RUIElement *_header;
    RUISubHeaderElement *_subHeader;
    RUIDetailHeaderElement *_detailHeader;
    RUIElement *_footer;
    RUITableView *_tableElement;
}

@property(nonatomic) _Bool configured; // @synthesize configured=_configured;
@property(nonatomic) __weak RUITableView *tableElement; // @synthesize tableElement=_tableElement;
@property(retain, nonatomic) RUIElement *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) RUIDetailHeaderElement *detailHeader; // @synthesize detailHeader=_detailHeader;
@property(retain, nonatomic) RUISubHeaderElement *subHeader; // @synthesize subHeader=_subHeader;
@property(retain, nonatomic) RUIElement *header; // @synthesize header=_header;
@property(retain, nonatomic) RUITableViewRow *showAllRow; // @synthesize showAllRow=_showAllRow;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(retain, nonatomic) RUITableViewHeaderFooterView *containerizedFooterView; // @synthesize containerizedFooterView=_containerizedFooterView;
@property(retain, nonatomic) UIView<RemoteUITableFooter> *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) RUITableViewHeaderFooterView *containerizedHeaderView; // @synthesize containerizedHeaderView=_containerizedHeaderView;
@property(retain, nonatomic) UIView<RUIHeader> *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (id)subElementsWithName:(id)arg1;
- (id)subElementWithID:(id)arg1;
- (void)populatePostbackDictionary:(id)arg1;
- (_Bool)hasCustomFooter;
- (void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (Class)_customFooterClass;
- (_Bool)hasCustomHeader;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize)arg1;
- (void)setImage:(id)arg1;
- (void)headerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (Class)_customHeaderClass;
- (id)colorFromAttributeString:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)tappedShowAllRowWithTable:(id)arg1;
@property(readonly, nonatomic) NSArray *rows;
- (void)removeRowAtIndex:(unsigned long long)arg1;
- (void)addRow:(id)arg1;
- (void)insertRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)hasValueForDrawsTopSeparator;
@property(nonatomic) _Bool drawTopSeparator;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (id)staticFunctions;
- (id)staticValues;

@end

