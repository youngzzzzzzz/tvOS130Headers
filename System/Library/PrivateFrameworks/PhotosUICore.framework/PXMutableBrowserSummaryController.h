/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol PXMutableBrowserSummaryController <NSObject>
@property (assign,nonatomic) BOOL shouldUseSubtitles; 
@property (assign,nonatomic) BOOL shouldUseNavigationTitle; 
@property (assign,nonatomic) BOOL shouldUseAbbreviatedDates; 
@property (assign,nonatomic) BOOL shouldShowLocationNames; 
@property (nonatomic,copy) NSDictionary * defaultAttributes; 
@property (nonatomic,copy) NSDictionary * emphasizedAttributes; 
@property (nonatomic,copy) NSDictionary * selectionAttributes; 
@required
-(NSDictionary *)defaultAttributes;
-(NSDictionary *)emphasizedAttributes;
-(void)invalidateContainerTitle;
-(void)invalidateLocalizedContainerItemsCount;
-(void)invalidateContainerDateInterval;
-(void)invalidateVisibleContent;
-(void)invalidateSelection;
-(void)invalidateFilteringContainerContent;
-(BOOL)shouldUseSubtitles;
-(void)setShouldUseSubtitles:(BOOL)arg1;
-(BOOL)shouldUseNavigationTitle;
-(void)setShouldUseNavigationTitle:(BOOL)arg1;
-(BOOL)shouldUseAbbreviatedDates;
-(void)setShouldUseAbbreviatedDates:(BOOL)arg1;
-(BOOL)shouldShowLocationNames;
-(void)setShouldShowLocationNames:(BOOL)arg1;
-(void)setDefaultAttributes:(id)arg1;
-(void)setEmphasizedAttributes:(id)arg1;
-(NSDictionary *)selectionAttributes;
-(void)setSelectionAttributes:(id)arg1;

@end
