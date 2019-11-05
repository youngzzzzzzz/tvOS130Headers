/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSString, UILabel, UIView;

@interface TVPSharedPSAlbumCreatorCell : UIView {

	NSString* _creatorName;
	NSString* _dateCreated;
	UILabel* _creatorNameLabel;
	UILabel* _dateCreatedLabel;
	UIView* _lineDivider;

}

@property (nonatomic,retain) UILabel * creatorNameLabel;              //@synthesize creatorNameLabel=_creatorNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * dateCreatedLabel;              //@synthesize dateCreatedLabel=_dateCreatedLabel - In the implementation block
@property (nonatomic,retain) UIView * lineDivider;                    //@synthesize lineDivider=_lineDivider - In the implementation block
@property (nonatomic,copy) NSString * creatorName;                    //@synthesize creatorName=_creatorName - In the implementation block
@property (nonatomic,copy) NSString * dateCreated;                    //@synthesize dateCreated=_dateCreated - In the implementation block
+(double)maxCellHeightWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3 ;
-(NSString *)dateCreated;
-(void)setDateCreated:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setCreatorName:(NSString *)arg1 ;
-(NSString *)creatorName;
-(UILabel *)creatorNameLabel;
-(void)setCreatorNameLabel:(UILabel *)arg1 ;
-(UILabel *)dateCreatedLabel;
-(void)setDateCreatedLabel:(UILabel *)arg1 ;
-(UIView *)lineDivider;
-(void)setLineDivider:(UIView *)arg1 ;
@end
