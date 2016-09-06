//
//  Entity+CoreDataProperties.h
//  SQLiteExample
//
//  Created by Fu on 16/9/6.
//  Copyright © 2016年 Fu. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Entity.h"

NS_ASSUME_NONNULL_BEGIN

@interface Entity (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *n_id;
@property (nullable, nonatomic, retain) NSString *c_name;
@property (nullable, nonatomic, retain) NSString *c_words;
@property (nullable, nonatomic, retain) NSString *c_his;

@end

NS_ASSUME_NONNULL_END
