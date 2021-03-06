/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <PhotosUICore/PXUIViewBasicTile.h>
#import <PhotosUICore/PXReusableObject.h>

@class UIView, NSString;

@interface PXCMMAssetStatusBadgeView : UIView <PXUIViewBasicTile, PXReusableObject> {

	SCD_Struct_PX37 _needsUpdateFlags;
	long long _status;
	UIView* _glyphView;

}

@property (assign,nonatomic) long long status;                      //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) UIView * glyphView;                    //@synthesize glyphView=_glyphView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
+(CGSize)preferredSize;
-(long long)status;
-(void)prepareForReuse;
-(void)setStatus:(long long)arg1 ;
-(UIView *)view;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)becomeReusable;
-(void)_invalidateImageView;
-(void)_updateImageViewIfNeeded;
-(UIView *)glyphView;
-(void)setGlyphView:(UIView *)arg1 ;
@end

