//
//  spUser.h
//  Sportplus
//
//  Created by 虎猫儿 on 15/2/13.
//  Copyright (c) 2015年 JiaZai. All rights reserved.
//

#import <AVOSCloud/AVOSCloud.h>
#import "spCampus.h"

@interface spUser : AVUser<AVSubclassing> 

@property NSString *sP_userName ;//姓名 [spUser user].username是电话

#warning 不用字段
@property NSString *sP_userTrueName ;//实名
@property NSString *sP_school ;//学校
@property NSString *sP_academy ;//学院

@property spCampus *sP_campus ;

@property NSString *sP_sex ; //{男,女}
@property NSNumber *sP_enterScYear ;//入学年份

@property NSNumber *sP_friendCount ;//朋友数
@property NSNumber *sP_validateCount ;//验证次数
@property NSNumber *sP_reportedCount ;//被举报次数
@property NSNumber *sP_successCount ;//成功运动次数

@property NSArray *sP_tagList ;//tag列表
@property NSArray *sP_photoIdList ;//照片列表
@property NSArray *sP_sportList ;//运动列表

@property AVFile *sP_avatar ;//头像

- (NSString *)toInfoLabelString ;

- (NSString *)toInfoLabelStringOfEnterSchoolJobAndSex ;

/**
 *  将academy和enterSchoolYear转换成好友申请的显示String
 *
 *  @return xxx学院2xxx级
 */
- (NSString *)toFriendRequestDisplayLabelString ;

@end
