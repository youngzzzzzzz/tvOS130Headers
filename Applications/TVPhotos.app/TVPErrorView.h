/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPhotos/TVPhotos-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel;

@interface TVPErrorView : UIView {

	NSString* _errorTitle;
	NSString* _errorMessage;
	UILabel* _errorTitleLabel;
	UILabel* _errorMessageLabel;

}

@property (nonatomic,retain) UILabel * errorTitleLabel;                //@synthesize errorTitleLabel=_errorTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * errorMessageLabel;              //@synthesize errorMessageLabel=_errorMessageLabel - In the implementation block
@property (nonatomic,copy) NSString * errorTitle;                      //@synthesize errorTitle=_errorTitle - In the implementation block
@property (nonatomic,copy) NSString * errorMessage;                    //@synthesize errorMessage=_errorMessage - In the implementation block
-(NSString *)errorMessage;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)errorTitle;
-(void)setErrorMessage:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateLabels;
-(void)setErrorTitle:(NSString *)arg1 ;
-(UILabel *)errorTitleLabel;
-(void)setErrorTitleLabel:(UILabel *)arg1 ;
-(UILabel *)errorMessageLabel;
-(void)setErrorMessageLabel:(UILabel *)arg1 ;
@end
