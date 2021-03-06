/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout;

@interface VUICastInfoLayout : TVViewLayout {

	VUITextLayout* _headerTextLayout;
	VUITextLayout* _textLayout;

}

@property (nonatomic,readonly) VUITextLayout * headerTextLayout;              //@synthesize headerTextLayout=_headerTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * textLayout;                    //@synthesize textLayout=_textLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(VUITextLayout *)textLayout;
-(VUITextLayout *)headerTextLayout;
@end

