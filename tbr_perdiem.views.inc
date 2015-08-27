<?php

/**
* Implementation of hook_views_data
*/

function  tbr_perdiem_views_data() {
   error_log("Loading views");
   $data['perdiem']['table']['group'] = t('TBR Per Diem Data');
   $data['perdiem']['table']['base'] = array(
      'field' => 'id',
      'title' => t('perdiem'),
      'help' => t('Autoincremented ID field, to enable views integration'),
      'database' => 'tbr_data_salaries',
      'weight' => -10,
   );

   $data['perdiem']['City'] = array(
      'title' => t('Per Diem City'),
      'help' => t('Per Diem City'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['perdiem']['County'] = array(
      'title' => t('Per Diem County'),
      'help' => t('Per Diem County'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['perdiem']['FiscalYear'] = array(
      'title' => t('Per Diem Year'),
      'help' => t('Per Diem Year'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['perdiem']['Meals'] = array(
      'title' => t('Per Diem Meals'),
      'help' => t('Meals'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
   $data['perdiem']['State'] = array(
      'title' => t('Per Diem State'),
      'help' => t('Per Diem State'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['perdiem']['Zip'] = array(
      'title' => t('Per Diem Zip'),
      'help' => t('Per Diem Zip'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

    $data['perdiem']['LocationDefined'] = array(
      'title' => t('Per Diem Location Defined'),
      'help' => t('Per Diem Location Defined'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
           $data['perdiem']['Oct'] = array(
      'title' => t('Oct Per Diem Hotel Rate'),
      'help' => t('Per Diem Hotel Rate'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
           $data['perdiem']['Nov'] = array(
      'title' => t('Nov Per Diem Hotel Rate'),
      'help' => t('Per Diem Hotel Rate'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
           $data['perdiem']['Dec'] = array(
      'title' => t('Dec Per Diem Hotel Rate'),
      'help' => t('Per Diem Hotel Rate'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
           $data['perdiem']['Jan'] = array(
      'title' => t('Jan Per Diem Hotel Rate'),
      'help' => t('Per Diem Hotel Rate'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
           $data['perdiem']['Feb'] = array(
      'title' => t('Feb Per Diem Hotel Rate'),
      'help' => t('Per Diem Hotel Rate'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
           $data['perdiem']['Mar'] = array(
      'title' => t('Mar Per Diem Hotel Rate'),
      'help' => t('Per Diem Hotel Rate'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
           $data['perdiem']['Apr'] = array(
      'title' => t('Apr Per Diem Hotel Rate'),
      'help' => t('Per Diem Hotel Rate'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
           $data['perdiem']['May'] = array(
      'title' => t('May Per Diem Hotel Rate'),
      'help' => t('Per Diem Hotel Rate'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
           $data['perdiem']['Jun'] = array(
      'title' => t('Jun Per Diem Hotel Rate'),
      'help' => t('Per Diem Hotel Rate'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
       $data['perdiem']['Jul'] = array(
      'title' => t('Jul Per Diem Hotel Rate'),
      'help' => t('Per Diem Hotel Rate'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
           $data['perdiem']['Aug'] = array(
      'title' => t('Aug Per Diem Hotel Rate'),
      'help' => t('Per Diem Hotel Rate'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
           $data['perdiem']['Sep'] = array(
      'title' => t('Sep Per Diem Hotel Rate'),
      'help' => t('Per Diem Hotel Rate'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );


   return $data;

}
